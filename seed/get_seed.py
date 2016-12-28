a, b = [int(x) for x in open('.conf', 'r').readline().split()]

print(a + (int(input()) % (b - a)))
