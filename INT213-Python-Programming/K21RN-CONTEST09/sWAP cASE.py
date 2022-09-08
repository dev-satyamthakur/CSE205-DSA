def swap_case(s):
    result = ""
    for i in s:
        if (i.isupper()):
            result = result + i.lower()
        elif (i.islower()):
            result = result + i.upper()
        else:
            result += i
            
    return result