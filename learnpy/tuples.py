# https://developers.google.com/edu/python/sorting

# Tuples play a sort of "struct" role in Python 
# -- a convenient way to pass around a little logical, 
# fixed size bundle of values. 
# A function that needs to return multiple values 
# can just return a tuple of the values.

# The "empty" tuple is just an empty pair of parenthesis.

print(tuple[2])
tuple = (1, 2, 'hi')
print(len(tuple))
tuple[2] = 'bye' ## CANNOT
tuple = (1, 2, 'bye')
# you can't change an element
# but you can change the whole thing

# To create a size-1 tuple, the lone element must be followed by a comma.
tuple = ('hi',)

# Assigning a tuple to an identically sized tuple of variable names 
# assigns all the corresponding values. 
# If the tuples are not the same size, 
# it throws an error. 
# This feature works for lists too.

(x, y, z) = (42, 13, 'hike')
print(z)

# useful for function returning multiple values:
# (a1, a2) = func()
