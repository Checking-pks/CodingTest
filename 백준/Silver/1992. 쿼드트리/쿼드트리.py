def isAllSame(field):
    num = field[0][0]

    for i in field:
        for j in i:
            if num != j:
                return "2"

    return str(num)

def recursive(field):
    if isAllSame(field) != "2":
        return isAllSame(field)

    halfFieldSize = len(field)//2

    field_01 = []
    field_02 = []
    field_03 = []
    field_04 = []

    for i in range(halfFieldSize * 2):
        if i < halfFieldSize:
            field_01.append(field[i][:halfFieldSize])
            field_02.append(field[i][halfFieldSize:])
        else:
            field_03.append(field[i][:halfFieldSize])
            field_04.append(field[i][halfFieldSize:])

    return "(" + recursive(field_01) + recursive(field_02) + recursive(field_03) + recursive(field_04) + ")"

n = int(input())
field = []

for i in range(n):
    line = input()
    field.append(line)

print(recursive(field))