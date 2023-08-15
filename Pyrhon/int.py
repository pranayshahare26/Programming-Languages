total = 3 * 3
print(total)

total = 5 + 2 * 3
print(total)

cost = 1.50 + 3.75
cost = 1.50 - 3.75
print(cost)
# total = int('g')+ 1

try:
    total = int('g') + 1
except ValueError:
    total = 0
print(total)