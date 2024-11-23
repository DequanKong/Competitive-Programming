# My unnecessary attempt at fetching all problems with hidden anime-png on DMOJ
# Note that DMOJ has a limit of 90 requests per minute
# This is "useless" because you can simply use this URL instead: https://dmoj.ca/problems/?search="anime-img"&full_text=1
# Note that you might need to install pip and import requests & bs4.

import requests
from bs4 import BeautifulSoup

def fetch_problem_ids_from_page(page_number):
    url = f"https://dmoj.ca/problems/?page={page_number}"
    try:
        response = requests.get(url)
        response.raise_for_status() 
        soup = BeautifulSoup(response.content, "html.parser")

        problem_ids = set() 
        problem_links = soup.find_all("a", href=True)

        for link in problem_links:
            href = link['href']
            if href.startswith('/problem/') and href.count('/') == 2:
                problem_id = href.split('/problem/')[1]
                problem_ids.add(problem_id)

        return problem_ids
    except requests.exceptions.RequestException as e:
        print(f"Error fetching page {page_number}: {e}")
        return set()

all_problem_ids = set()

for page_number in range(60,61):  # Change page number here
    problem_ids = fetch_problem_ids_from_page(page_number)
    all_problem_ids.update(problem_ids)

all_problem_ids = list(all_problem_ids)
print("Problem IDs:", all_problem_ids)

base_url = 'https://dmoj.ca/problem/'

problems_with_hidden_divs = []

for problem_id in all_problem_ids:
    url = base_url + problem_id
    try:
        response = requests.get(url)
        response.raise_for_status() 
        soup = BeautifulSoup(response.text, 'html.parser')
        
        hidden_divs = soup.find_all('div', class_='imgmanip anime-img')
        
        if hidden_divs:
            problems_with_hidden_divs.append(problem_id)
    except requests.exceptions.RequestException as e:
        print(f"Error fetching problem {problem_id}: {e}")

print("Problems with hidden divs:", problems_with_hidden_divs)
