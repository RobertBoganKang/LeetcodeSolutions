# Solution
Like what we do in paper, all number store in the array in reverse (the length of array is the sum of two numbers length). Since we do from small number to large number, we only consider the value combination at next level(namely: `tens` and `ones`, the value at next value will combine until the end).

Finally, we convert array back to number (watch the 0s will ignore).
