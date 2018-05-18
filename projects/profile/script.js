const aboutLink = document.querySelector('#about-me');
const animateMotion = aboutLink.dataset.motion;
const hoverClass = aboutLink.classList.add(animateMotion);

aboutLink.addEventListener('mouseover', () => {
  aboutLink.classList.toggle(animateMotion);
})
