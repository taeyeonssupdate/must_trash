print("Commands：add delete print exit\n")
cmd = True
my_list = []
while cmd:
    try:
        cmd = input("-->").strip().lower()
        if cmd == "add":
            cmd = int(input("Input data："))
            my_list.append(cmd)
        elif cmd == "delete":
            print(my_list.pop(0))
        elif cmd == "print":
            print(" ".join(list(map(str, my_list))))
        elif cmd == "exit":
            cmd = None
        else:
            print("Command not found")
    except IndexError as e:
        if not my_list: print("Empty can't delete")
        else: print(f"Something error: {e}")
    except (EOFError, KeyboardInterrupt): exit(1)