nr_contest = int(input())
contest_problems = list(map(int,input().split()))
contest_problems.sort()
train_days = 1

# print(contest_problems)
for value in contest_problems:
    if (value >= train_days):
        train_days +=1


print(train_days-1)
		 		 					  		    			 	    			