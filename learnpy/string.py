s = 'hi'
print(s[1])
print(len(s))

print("test" + " again")
print('test' + ' again')

s1 = 'hello'
s2 = ' world'
print(s1 + s2)

s3 = 'hi'
print(s3 + ' there')

pi = 3.14
text = 'test ' + str(pi)
print(text)

raw = r'this\t\n and that'
print(raw)
# versus
raw = 'this\t\n and that'
print(raw)

multi = """It was the best of times.
  It was the worst of times."""
print(multi)

# https://developers.google.com/edu/python/strings

# % operator
text = "%d little pigs come out, or I'll %s, and I'll %s, and I'll blow your %s down." % (3, 'huff', 'puff', 'house')

speed = 95
mood = 'bad'
if speed >= 80:
    print('License and registration please')
    if mood == 'terrible' or speed >= 100:
      print('You have the right to remain silent.')
    elif mood == 'bad' or speed >= 90:
      print("I'm going to have to write you a ticket.")
      #write_ticket()
    else:
      print("Let's try to keep it under 80 ok?")