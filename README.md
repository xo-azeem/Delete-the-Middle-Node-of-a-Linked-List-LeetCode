# Delete the Middle Node of a Linked List

LeetCode Q # 2095.

You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
 
Example 1:

<div align = "center">

  ![image](https://github.com/xo-azeem/Delete-the-Middle-Node-of-a-Linked-List-LeetCode/assets/171427226/214f9820-0bb7-41b8-80fd-ff84d54a8c5b)

</div>

>Input: head = [1,3,4,7,1,2,6]
>Output: [1,3,4,1,2,6]
>Explanation:
>The above figure represents the given linked list. The indices of the nodes are written below.
>Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
>We return the new list after removing this node. 

Example 2:

<div align = "center">

  ![image](https://github.com/xo-azeem/Delete-the-Middle-Node-of-a-Linked-List-LeetCode/assets/171427226/70152631-3896-40b4-bc5b-1e152b018c5c)

</div>

>Input: head = [1,2,3,4]
>Output: [1,2,4]
>Explanation:
>The above figure represents the given linked list.
>For n = 4, node 2 with value 3 is the middle node, which is marked in red.

Example 3:

<div align = "center">

  ![image](https://github.com/xo-azeem/Delete-the-Middle-Node-of-a-Linked-List-LeetCode/assets/171427226/bdedb04b-81fa-4919-9410-2813aadf6770)

</div>

>Input: head = [2,1]
>Output: [2]
>Explanation:
>The above figure represents the given linked list.
>For n = 2, node 1 with value 1 is the middle node, which is marked in red.
>Node 0 with value 2 is the only node remaining after removing node 1.

My Solution Analysis:

<div align = "center">

  ![image](https://github.com/xo-azeem/Delete-the-Middle-Node-of-a-Linked-List-LeetCode/assets/171427226/eb16e5ea-7d82-4205-abfa-371e569d16b1)

  Time complexity: O(n).</br>Space complexity: O(1).
</div>
