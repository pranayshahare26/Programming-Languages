import re

def is_palindrome(phrase):
    phrase = re.sub(r'[^A-Za-z0-9]+', '', phrase).lower()
    return phrase == phrase[::-1]

print(is_palindrome("Go hang a salami I'm a lasagna hog."))
print(is_palindrome("Was it a rat I saw?"))
print(is_palindrome("Step on no pets"))
print(is_palindrome("Sit on a potato pan, Otis"))
print(is_palindrome("Lisa Bonet ate no basil"))
print(is_palindrome("Satan, oscillate my metallic sonatas"))
print(is_palindrome("I roamed under it as a tired nude Maori"))
print(is_palindrome("Rise to vote sir"))
print(is_palindrome("Dammit, I'm mad!"))
