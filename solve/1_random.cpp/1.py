def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    results = []
    
    for _ in range(t):
        n = int(data[index])
        index += 1
        
        if n == 1:
            results.append("1")
        elif n == 2:
            results.append("-1")
        else:
            # Generate the permutation
            # The pattern is to start with n and follow with numbers from 1 to n-1
            permutation = list(range(n, 1, -1)) + [1]
            results.append(" ".join(map(str, permutation)))
    
    # Print all results
    print("\n".join(results))

