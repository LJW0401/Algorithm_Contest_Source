[n, a, b, c] = [int(val) for val in input().split()]
energy = [0] + [-1<<60]*4000

for i in range(1, n + 1):
    energy[i] = max(energy[i - a], energy[i - b], energy[i - c]) + 1
    
print(energy[n])
