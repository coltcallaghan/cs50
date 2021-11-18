from cs50 import get_string


def main():

    text = get_string("Text: ")

    l = 0
    w = 0
    s = 0

    for i in text:
        if i.isalpha():
            l += 1

    w = len(text.split())

    s = text.count(".") + text.count("!") + text.count("?")
    s = s - text.count("...")

    print(l)
    print(w)
    print(s)

    L = 100 * l / w
    S = 100 * s / w

    index = round(0.0588 * L - 0.296 * S - 15.8)

    if index < 0:
        print("Before Grade 1")

    elif index > 16:
        print ("Grade 16+")

    else:
        print(f"Grade {index}")


if __name__ == "__main__":
    main()
