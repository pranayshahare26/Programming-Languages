# # a web scraping example 1
# import requests
# from bs4 import BeautifulSoup

# # The URL of the BBC News homepage
# url = 'https://www.bbc.com/news'

# # Make a GET request to the URL
# response = requests.get(url)

# # Create a Beautiful Soup object from the response content
# soup = BeautifulSoup(response.content, 'html.parser')

# # Find all the headline tags on the page
# headlines = soup.find_all('h3', class_='gs-c-promo-heading__title')

# # Loop through the headline tags and print the text
# for headline in headlines:
#     print(headline.text)


"""
-----------------------------------------------------------------------------
Attributes and methods of a response object in Python's requests library:
-----------------------------------------------------------------------------
Attributes:

response.status_code: The HTTP status code of the response (e.g. 200 for a successful response, 404 for a "Not Found" error, etc.)
response.headers: A dictionary of the HTTP headers sent by the server in the response
response.text: The content of the response, as a string (if the response is text-based)
response.content: The content of the response, as bytes (if the response is binary)
response.url: The URL of the final page after any redirects (if they occurred)
response.request: The PreparedRequest object that was used to create the request, including the HTTP method, URL, headers, and body
response.cookies: A dictionary of any cookies returned by the server in the response
response.history: A list of any previous responses that led to the final response (if there were any redirects)

Methods:

response.raise_for_status(): Raises an exception if the status code of the response indicates an error (i.e. not in the 200-299 range)
response.json(): Parses the response content as JSON (assuming it is valid JSON)
response.iter_content(): Iterates over the response content in chunks (useful for large files)
response.iter_lines(): Iterates over the response content line by line (useful for text-based responses)
response.close(): Closes the connection to the server (useful when working with large responses to free up system resources)

# """

# example code that demonstrates various methods of a response object and webscraping
import requests
from bs4 import BeautifulSoup

# Send a GET request to the website
url = "http://quotes.toscrape.com/"
response = requests.get(url)

# # Print the response status code
# print("Response status code:", response.status_code)

# # Print the response headers
# print("Response headers:", response.headers)

# # Print the response content
# print("Response content:", response.content)

# Parse the HTML content using BeautifulSoup
soup = BeautifulSoup(response.content, 'html.parser')

# Extract the quotes and authors
quotes = soup.select('span.text')
authors = soup.select('small')

# print(quotes.__len__())
# print(authors.__len__())
# Print the quotes and authors
for i in range(len(quotes)):
    print("Quote:", quotes[i].text)
    print("Author:", authors[i].text)
    print()


