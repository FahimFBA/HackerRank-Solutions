def a(s):
    for i in range(len(s)):
        if(s[i].isalnum()):
            return True
            break
    return False

def b(s):
    for i in range(len(s)):
        if(s[i].isalpha()):
            return True
            break
    return False

def c(s):
    for i in range(len(s)):
        if(s[i].isdigit()):
            return True
            break
    return False

def d(s):
    for i in range(len(s)):
        if(s[i].islower()):
            return True
            break
    return False

def e(s):
    for i in range(len(s)):
        if(s[i].isupper()):
            return True
            break
    return False


if __name__ == '__main__':
    s = input()
    alphanumeric = a(s)
    alphabetical = b(s)
    digit = c(s)
    lowercase = d(s)
    uppercase = e(s)
    print(alphanumeric)
    print(alphabetical)
    print(digit)
    print(lowercase)
    print(uppercase)
