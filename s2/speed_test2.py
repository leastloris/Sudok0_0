import time

data = list(range(10_000_000))

start = time.time()

total = 0
for x in data:
    total += x * x

end = time.time()

print("Sum of squares:", total)
print("Execution time (Python):", end - start, "seconds")
