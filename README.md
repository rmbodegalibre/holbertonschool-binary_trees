<h1>C - Binary trees</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Binary tree" href="https://intranet.hbtn.io/rltoken/Fh5nlgv82l1bUbWmdSNwaQ" target="_blank" rel="noopener">Binary tree</a>&nbsp;(<em>note the first line:&nbsp;<code>Not to be confused with B-tree.</code></em>)</li>
<li><a title="Data Structure and Algorithms - Tree" href="https://intranet.hbtn.io/rltoken/fmFIIvUSROgY2lUOBy7S5A" target="_blank" rel="noopener">Data Structure and Algorithms - Tree</a></li>
<li><a title="Tree Traversal" href="https://intranet.hbtn.io/rltoken/eM-xhVxz4ss4clru2cyVqQ" target="_blank" rel="noopener">Tree Traversal</a></li>
<li><a title="Binary Search Tree" href="https://intranet.hbtn.io/rltoken/753pOe8BipA5bSJzZCrqeg" target="_blank" rel="noopener">Binary Search Tree</a></li>
<li><a title="Data structures: Binary Tree" href="https://intranet.hbtn.io/rltoken/xTtNtmcL9Z6EmChV67Ce8A" target="_blank" rel="noopener">Data structures: Binary Tree</a></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/p-z8FiBY0B3y09a87_1XAA" target="_blank" rel="noopener">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What is a binary tree</li>
<li>What is the difference between a binary tree and a Binary Search Tree</li>
<li>What is the possible gain in terms of time complexity compared to linked lists</li>
<li>What are the depth, the height, the size of a binary tree</li>
<li>What are the different traversal methods to go through a binary tree</li>
<li>What is a complete, a full, a perfect, a balanced binary tree</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A&nbsp;<code>README.md</code>&nbsp;file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the&nbsp;<code>Betty</code>&nbsp;style. It will be checked using&nbsp;<a title="betty-style.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" rel="noopener">betty-style.pl</a>&nbsp;and&nbsp;<a title="betty-doc.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" rel="noopener">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the standard library</li>
<li>In the following examples, the&nbsp;<code>main.c</code>&nbsp;files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code>&nbsp;files at compilation. Our&nbsp;<code>main.c</code>&nbsp;files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called&nbsp;<code>binary_trees.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>
<h2>More Info</h2>
<h3>Data structures</h3>
<p>Please use the following data structures and types for binary trees. Don&rsquo;t forget to include them in your header file.</p>
<h4>Basic Binary Tree</h4>
<pre><code>/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
</code></pre>
<h4>Binary Search Tree</h4>
<pre><code>typedef struct binary_tree_s bst_t;
</code></pre>
<h4>AVL Tree</h4>
<pre><code>typedef struct binary_tree_s avl_t;
</code></pre>
<h4>Max Binary Heap</h4>
<pre><code>typedef struct binary_tree_s heap_t;
</code></pre>
<p><strong>Note:</strong>&nbsp;For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don&rsquo;t follow any kind of rule.</p>
<h3>Print function</h3>
<p>To match the examples in the tasks, you are given&nbsp;<a title="this function" href="https://github.com/holbertonschool/0x1C.c" target="_blank" rel="noopener">this function</a></p>
<p>This function is used only for visualization purposes. You don&rsquo;t have to push it to your repo. It may not be used during the correction</p>