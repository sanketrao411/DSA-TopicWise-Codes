def longest_special_subsequence(t, test_cases):
    results = []
    for case in test_cases:
        n = case[0]
        a = case[1]
        count = {}
        
        for num in a:
            if num in count:
                count[num] += 1
            else:
                count[num] = 1
        
        # Determine the maximum number of elements we can include in the special subsequence
        unique_numbers = set(a)
        if len(unique_numbers) < n:  # There are duplicates
            results.append(n)
        else:
            results.append(n - 1)
    
    return results

# Reading input
import sys
input = sys.stdin.read
data = input().split()

# Parsing input
index = 0
t = int(data[index])
index += 1
test_cases = []
for _ in range(t):
    n = int(data[index])
    index += 1
    a = list(map(int, data[index:index + n]))
    index += n
    test_cases.append((n, a))

# Get results
results = longest_special_subsequence(t, test_cases)

# Print results
for result in results:
    print(result)
