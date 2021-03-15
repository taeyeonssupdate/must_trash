class ParkingSystem(object):
    carDict = {1: 0, 2: 0, 3: 0}

    def __init__(self, big, medium, small):
        self.carDict[1] = big
        self.carDict[2] = medium
        self.carDict[3] = small

    def addCar(self, carType):
        if self.carDict[carType] >= 1:
            self.carDict[carType] -= 1
            return True
        else:
            return False

        # Your ParkingSystem object will be instantiated and called as such:
        # obj = ParkingSystem(big, medium, small)
        # param_1 = obj.addCar(carType)


command_texts = ["ParkingSystem", "addCar", "addCar", "addCar", "addCar"]
commands = [[1, 1, 0], [1], [2], [3], [1]]

ssidx = command_texts.index("ParkingSystem")


System = ParkingSystem(commands[ssidx][0], commands[ssidx][1], commands[ssidx][2])
out = []
for i in range(len(commands)):
    if command_texts[i] == "addCar":
        out.append(System.addCar(commands[i][0]))
if System.big == System.medium == System.small <= 0:
    out.insert(0, None)
else:
    out.insert(0, [System.big, System.medium, System.small])
print(out)
