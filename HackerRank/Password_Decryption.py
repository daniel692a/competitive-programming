def decryptPassword(s):
    # Write your code here
    decrypt = []
    pointer_nums = 0
    for i in range(len(s)):
        if ((s[i].isdigit()) and (s[i]!='0')):
            pointer_nums+=1
        elif s[i]=='0':
            decrypt.append(s[pointer_nums-1])
            pointer_nums-=1
        elif ((s[i].isupper()) and (s[i+1].islower())):
            decrypt.append(s[i+1])
            decrypt.append(s[i])
            i+=2
        elif s[i].isalpha():
            decrypt.append(s[i])
    return ''.join(decrypt)

if __name__ == '__main__':
    print(decryptPassword('51Pa*0Lp*0e'))