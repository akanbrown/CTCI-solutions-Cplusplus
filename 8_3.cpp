/**
Write a method that returns all subsets of a set.

**/

/**
We should first have some reasonable expectations of our time and space 
complexity. How many subsets of a set are there? We can compute this 
by realizing that when we generate a subset, each element has the
"choice" of either being in there or not. That is, for the first
element, there are 2 choices. For the second, there are two, etc. 
So, doing 2 * 2 * ... * 2 n times gives us 2^n subsets. We will not be able
to do better than this in time or space complexity.

Approach #1: Recursion
This is a great problem to implement with recursion since we can build all subsets
of a set using all subsets of a smaller set. Specifically, given a set S, we can do the following
recursively

1. Let first = S[0]. Let smallerSet=S[1, ..., n].
2. Compute all subsets of smallerSet and put them in allsubsets.
3. For each subset in allsubsets, clone it and add first to the subset.

The following code implements this algorithm:

**/

ArrayList<ArrayList<Integer>> getSubsets(ArrayList<Integer> set, int index){
  ArrayList<ArrayList<Integer>> allsubsets;
  if (set.size() == index){
    allsubsets=new ArrayList<ArrayList<Integer>>();
    allsubsets.add(new ArrayList<Integer>()); //Empty set
  } else {
    allsubsets = getSubsets(set, index+1);
    int item = set.get(index);
    ArrayList<ArrayList<Integer>> moresubsets=new ArrayList<ArrayList<Integer>>();
