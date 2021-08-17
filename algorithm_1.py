print("Commands：push pop + - exit\n")
cmd = True
my_list = []
while cmd:
    try:
        cmd = input("==>").strip().lower()
        if cmd == "push":
            cmd = int(input("Input number："))
            my_list.append(cmd)
        elif cmd == "pop":
            print(my_list.pop())
        elif cmd == "+":
            my_list.insert(0, my_list.pop()+my_list.pop())
        elif cmd == "-":
            my_list.insert(0, my_list.pop()-my_list.pop())
        elif cmd == "exit":
            cmd = None
        else:
            print("Command not found")
    except IndexError: print("Error stack must be more than two value")
    except (EOFError, KeyboardInterrupt): exit(1)
print("Bye!")
