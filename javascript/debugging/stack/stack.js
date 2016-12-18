function callC() {
    console.log("callC called");
}

function callB() {
    console.log("callB called");
}

function callA() {
    callB();
    callC();
}

function main() {
    callA();
    return;
}

main();
