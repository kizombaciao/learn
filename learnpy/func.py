

def repeat(s, exclaim):
    result = s + s + s
    # can also use "s * 3" which is faster
    if exclaim:
        result = result + '!!!'
    return result

def main():
    print repeat('Yay', False)
    print repeat('Woo Hoo', True)


if __name__ == '__main__':
    main()


# https://developers.google.com/edu/python/introduction


