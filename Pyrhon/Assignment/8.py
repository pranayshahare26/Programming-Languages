people = {'Arham': 'Blue', 'Lisa': 'Yellow', 'Vinod': 'Purple', 'Jenny': 'Pin'}
print("Number of students in the list:", len(people))
people['Lisa'] = 'Green'
print("Lisa's favourite colour changed to", people['Lisa'])
del people['Jenny']
print("Jenny and her favourite color removed from the dictionary.\nUpdated dictionary:", people)
sorted_people = sorted(people.items())
for person, colour in sorted_people:
    print(person, ":", colour)