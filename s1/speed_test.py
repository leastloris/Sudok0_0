import time

N = 3_000_000  # fits in 64-bit integer
data = list(range(N))

start = time.time()
total = 0
for x in data:
    total += x * x
end = time.time()

print("Sum of squares:", total)
print("Execution time (Python):", end - start, "seconds")
