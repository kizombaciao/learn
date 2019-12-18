# https://developers.google.com/edu/python/lists

# Assignment with an = on lists does not make a copy. 
# Instead, assignment makes the two variables point to the one list in memory.


colors = ['red', 'blue', 'green']
print(colors[0])    ## red
print(colors[2])    ## green
print(len(colors))  ## 3

# The "empty list" is just an empty pair of brackets [ ]. 
# The '+' works to append two lists, 
# so [1, 2] + [3, 4] yields [1, 2, 3, 4] 
# (this is just like + with strings).

a = [1, 2]
b = [3, 4]
print(a + b)

squares = [1, 4, 9, 16]
sum = 0
for num in squares:
    sum += num
print(sum)  ## 30

list = ['larry', 'curly', 'moe']
if 'curly' in list:
    print('yay')

# The string acts like a list of its chars, 
# so for ch in s: print ch prints all the chars in a string.

## print the numbers from 0 through 99
for i in range(100):
    print(i)

a = 'test'
i = 0
while i < len(a):
    print(a[i])
    i = i + 3

list = ['larry', 'curly', 'moe']
list.append('shemp')         ## append elem at end
list.insert(0, 'xxx')        ## insert elem at index 0
list.extend(['yyy', 'zzz'])  ## add list of elems at end
print(list)  ## ['xxx', 'larry', 'curly', 'moe', 'shemp', 'yyy', 'zzz']
print(list.index('curly'))    ## 2
list.remove('curly')         ## search and remove that element
list.pop(1)                  ## removes and returns 'larry'
print(list)  ## ['xxx', 'moe', 'shemp', 'yyy', 'zzz']

list = ['a', 'b', 'c', 'd']
print(list[1:-1])   ## ['b', 'c']
list[0:2] = 'z'    ## replace ['a', 'b'] with ['z']
print(list)         ## ['z', 'c', 'd']
# but does not work for
# list = [1, 2, 3, 4]

