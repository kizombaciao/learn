# https://developers.google.com/edu/python/sorting

nums = [1, 2, 3, 4]
sq = [n * n for n in nums]
print(sq)

# The syntax is [ expr for var in list ]


s1 = ['a', 'b', 'c']
s2 = [s.upper() + '!!!' for s in s1]
print(s2)

s1 = ['aa', 'ba', 'cc']
s2 = [s.upper() for s in s1 if 'a' in s]
print(s2)
