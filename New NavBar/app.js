// Select all navigation links
const navLinks = document.querySelectorAll("nav ul li a");

// Add hover animation using GSAP
navLinks.forEach(link => {
  link.addEventListener("mouseenter", () => {
    gsap.to(link, { scale: 1.2, duration: 0.3 });
  });

  link.addEventListener("mouseleave", () => {
    gsap.to(link, { scale: 1, duration: 0.3 });
  });
});

// Create a span for the underline
const underline = document.createElement("span");
underline.style.position = "absolute";
underline.style.height = "2px";
underline.style.backgroundColor = "#ff6347";
underline.style.bottom = "0";
underline.style.left = "0";
underline.style.width = "0";
underline.style.transition = "width 0.3s ease";
document.querySelector("nav").appendChild(underline);

// Add hover effect for sliding underline
navLinks.forEach(link => {
  link.addEventListener("mouseenter", (e) => {
    const { left, width } = e.target.getBoundingClientRect();
    gsap.to(underline, {
      width: width,
      left: left,
      duration: 0.3,
    });
  });

  link.addEventListener("mouseleave", () => {
    gsap.to(underline, {
      width: 0,
      duration: 0.3,
    });
  });
});
