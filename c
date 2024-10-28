a = float(input("Change: "))
cash = a * 100
k = 0
money = [1, 5, 10, 25, 50, 100]
money.reverse()
i = 0
while cash > 0:
    if money[i] <= cash:
        cash -= money[i]
        k += 1
    else:
        i += 1
        
print(k)
