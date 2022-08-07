# CP
### 18-07-2022
1. Binary search before LC<br>
2. Codeforces Round #809</b> (Div. 2)<br>
done A during LC, upsolved C<br>
A. Was easy implementation question but confidence giving<br>
B. Based on Dp on graph, (will have to take later while studing DP)<br>
C. Prefix and suffix array concept is used beautifully, during LC i was able to figure out the odd part, but missed out on even. In the even part, we have to consider all cases where consiqutive two towers can not be cool, so we used prefix and suffix arrays to consider all the cases<br>

### 19-07-2022
1. Nothing before the LC
2. Codeforces Round #808 (Div. 2)<br>
Done A brute force (GOT TLE) upsolved B and C <br>
A. Was able to do it using a long brute force method of double loops, but the answer was based on a very tricky intution that, all elements must be a factor of A[1] to make all elements except first, zero. this was more of a trick question, as logically i was able to apply the brute force method. <br>
B. Was based on GCD, had no idea how to find it so skipped<br>
C. Was based on DP, had to revise, figured out how it could be done, but was not able to implement it. edit: the question was of binary search and brute force, but binary was tricky<br>

### 20-07-2022
1. Installed sublime text, excited to use it<br>
nothing before LC<br>
2. Codeforces Round #807 (Div. 2)<br>
solved A and B in LC, will Upsolved C<br>
A. easy implementation, based on sorting<br>
B. Easy observation question, but got overflow, but the logic and code were correct<br>
C. got the brute force solution (no brainer), but got MLE<br>
3. After LC<br>
https://codeforces.com/problemset/problem/282/A <br>
https://codeforces.com/contest/514/problem/A<br>
-->An easy way to extract each element from a integer <br>
int n = "1243";<br>
string str = to_string(n);<br>
for(){<br>
  char ar = str[0];<br>
  int a = ar - 48;<br>
  cout<<a;<br>
}<br>
-->To extract each element, but it is in reverse order<br>
while (n != 0) {<br>
		int remainder = n % 10;<br>
		v.push_back(remainder);<br>
		n /= 10;<br>
	}<br>
### 23-07-2022
free day<br>
### 24-07-2022
free day<br>
### 25-07-2022
Inplementation list of striver<br>
### 26-07-2022
continued Inplementation list of striver<br>
### 27-07-2022
Continued Inplementation list of striver<br>
### 08-08-2022
started binary search for div 2 c, still strugling with B but i think it will improve on its own<br>
paradims in binary search<br>
1. basic paradim<br>
Used to find closest left, closest right and floor , roof type of problems, just an basic search with some improvisation<hr>


# moved to https://www.notion.so/fearlessfax/Coding-9d724887b3a045fb94e2ce2000d35c11

*LC = Live Competition<br>
*MLE = Memory Limit Exceeded<br>
*TLE = Time Limit Exceeded<br>
