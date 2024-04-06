class Node {
  constructor(val) {
    this.val = val;
    this.left = null;
    this.right = null;
  }
}

//function to create BST and return root
function sortedArrayToBST(arr) {
  if (arr.length == 0) {
    return null;
  }
  const mid = Math.floor(arr.lengh / 2);
  const root = new Node(arr[mid]);

  //initialize queue
  const q = [
    [root, [0, mid - 1]],
    [root, [mid + 1, arr.length - 1]],
  ];

  while (q.length > 0) {
    const [parent, [left, right]] = q.shift(); //shift removes the first element and shifts the other elements in its place

    //if there's elements to proces and parent node is not NULL;
    if (left <= right && parent != null) {
      const mid = Math.floor((left + right) / 2);
      const child = new Node(arr[mid]);
      console.log("left , right mid : ", left, right, mid);

      //set child node as left or right of parent

      if (arr[mid] < parent.val) {
        parent.left = child;
      } else {
        parent.right = child;
      }

      q.push([child, [left, mid - 1]]);
      q.push([child, [mid + 1, right]]);
    }
  }
  return root;
}

function printBST(root) {
  if (root === null) {
    return;
  }
  console.log(root.val + " ");
  printBST(root.left);
  printBST(root.right);
}

const nums = [1, 2, 3, 4, 5, 6, 7];
const root = sortedArrayToBST(nums);
printBST(root);
