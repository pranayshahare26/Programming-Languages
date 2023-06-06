import string

def is_pangram(sentence):
    alphabet = set(string.ascii_lowercase)
    letters = set(filter(str.isalpha, sentence.lower()))
    return alphabet.issubset(letters)

print(is_pangram("The quick brown fox jumps over the lazy dog."))
print(is_pangram("Pack my box with five dozen liquor jugs."))
print(is_pangram("The five boxing wizards jump quickly."))
print(is_pangram("Hello world!"))