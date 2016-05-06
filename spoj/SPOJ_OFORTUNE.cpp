#include <cstdio>
#include <cstdlib>
 
int main()
{
	int t, T;										// Test cases and test case counter
	scanf("%d",&T);									// Get the number of test cases
	
	for ( t = 0 ; t < T ; t ++ )					// Go through all test cases
	{
		int inAmt;									// Initial amount
		int Y, y;									// Number of years
		int N, n;									// numbr of operations
		int bestSum = 0;							// Best results
		/// Get the input
		scanf("%d %d %d", &inAmt, &Y, &N);
		for ( n= 0 ; n < N ; n ++)
		{
			int mode;								// the mode ( simple or complex )
			double rate;							// Rate of interest
			int charge;								// Annual deduction
			
			// Get input for this mode
			scanf("%d %lf %d", &mode, &rate, &charge);
			
			/// Start calculation
			if (mode == 0)									// Simple Interest
			{
				int interest = 0;							// cumulative interest
				int amount = inAmt;							// Amount after n years
				for ( y = 0 ; y < Y ; y ++)					
				{
					interest += amount * rate;				// Add new interest to cumulative
					amount -= charge;						// Deduct the charge
				}
				amount += interest;							// Final amount
				bestSum = bestSum > amount ? bestSum : amount;
				
			} else {										// Compound interest
				int interest = 0;							// interest for each year
				int amount = inAmt;							// Initial amount
				for ( y = 0 ; y < Y ; y ++)
				{
					interest = amount * rate;				// Interest for the year
					amount += interest;						// Add the compound interst
					amount -= charge;						// Deduct the charge
				}
				bestSum = bestSum > amount ? bestSum : amount;
			}
		}
		/// output result
		printf("%d\n", bestSum);
		
	}
	
	return 0;										// Successful termination
} 