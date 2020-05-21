while True:
    try:
        cases = int(input())
        num = []
        for i in range(cases):
            number = input()
            num.append(number)
        for i in range(len(num)):
            print(int(num[i][::-1]))
    except:
        break