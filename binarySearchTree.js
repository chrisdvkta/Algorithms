class Node{
    constructor(d){
        this.data = d; 
        this.left = null;
        this.right = null;
    }
}

var root = null;

function sortedArrayToBST(arr, start, end){
    if (start> end) return null;
    let mid = parseInt(start+end)/2;
    let node = new Node(arr[mid]);
    node.left = sortedArrayToBST(arr,start,mid-1);
    node.right = sortedArrayToBST(arr,mid+1,end);
    return node;
}

//print
function preOrder(node){
    if (node ===null){
        return;
    }
    // document.write(node.data+ " ");
    console.log(node.data + " ");
    preOrder(node.left);
    preOrder(node.right);
}

let arr= [1,2,3,4,5,6,7];
 root = sortedArrayToBST(arr,0,arr.length-1);
preOrder(root);


