// class Character {
//   constructor(width = 10, height = 10) {
//     this.width = width;
//     this.height = height;
//   }
// }
//
// class PlayerCharacter extends Character {
//
//   constructor() {
//     super(width, height);
//   }
//
//   get boardLocation() {
//     return Math.floor(Math.random() * this.width * this.height);
//   }
// }
//
// class NonPlayerCharacter extends Character {
//
//   constructor() {
//     super(width, height);
//   }
//
//   get boardLocation() {
//     return Math.floor(Math.random() * this.width * this.height);
//   }
// }
//
// const character1 = new PlayerCharacter();
// const character2 = new NonPlayerCharacter();
//
// character1.boardLocation;
// character2.boardLocation;

// Solution

class Character {
  constructor(id, name, x, y) {
    this.id = id;
    this.name = name;
    this.x = x;
    this.y = y;
  }

  get position() {
    return {x: this.x, y: this.y};
  }
}

class PlayerCharacter extends Character {

}

class NonPlayerCharacter extends Character {

}

// helper functions

function createPlayer(id, name) {
  let x = Math.floor(Math.random() * 10);
  let y = Math.floor(Math.random() * 10);
  return new PlayerCharacter(id, name, x, y);
}

function createNonPlayer(id, name) {
  let x = Math.floor(Math.random() * 10);
  let y = Math.floor(Math.random() * 10);
  return new NonPlayerCharacter(id, name, x, y)
}

createNonPlayer(1, 'Rob').position;
