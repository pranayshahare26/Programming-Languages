def is_consonant(c):
    """
    Returns True if c is a consonant (i.e., not a vowel or a non-letter character),
    and False otherwise.
    """
    return c.isalpha() and c.lower() not in 'aeiouy'

def translate(text):
    """
    Translates a text into "rövarspråket" (Swedish for "robber's language").
    Every consonant in the text is doubled and an 'o' is inserted in between.
    Vowels and non-letter characters are left unchanged.
    """
    result = ''
    for c in text:
        if is_consonant(c):
            result += c + 'o' + c
        else:
            result += c
    return result
# text = 'this is fun'
# translation = translate(text)
print(translate)  # tothohisos isos fofunon
