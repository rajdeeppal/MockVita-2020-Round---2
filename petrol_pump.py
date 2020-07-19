def calculate_difference( a, n ):
	s = (sum(a))
	DP = [[ 0 for i in range(s+ 1)] for j in range(n+1)]
	for i in range(n+1):
		DP[i][0] = True
	for j in range(1,s+1):
		DP[0][j] = True
		
	for i in range(1,n+1):
		for j in range(1,s+1):
			DP[i][j] = DP[i-1][j]
			if(a[i-1]<=j):
				DP[i][j] |= DP[i-1][j-a[i-1]]
	for j in range(s//2,-1,-1):
		if(DP[n][j] == True ):
			diff = s - (2*j)
			break
	return diff
	
S = list(map(int,input().split()))
diff = calculate_difference(S,len(S) - 1)
m_p = (sum(S)- diff)/2
mx_p = m_p + diff 
print(int(mx_p))