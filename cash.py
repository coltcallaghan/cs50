from cs50 import get_float

def main():

    coins = 0
    c = [25, 10, 5, 1]

    while True:
        dollars = get_float("How many change needed in dollars: ")
        if dollars > 0:
            break

    cents = round(dollars*100)
    print(cents)

    for i in c:
        while cents >= i:
            cents = cents - i
            coins += 1

    print (coins)


if __name__ == "__main__":
    main()
