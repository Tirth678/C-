document.querySelectorAll('nav ul li a').forEach((link) => {
    const underline = link.querySelector('.underline');

    // Hover animation for text color
    link.addEventListener('mouseenter', () => {
      gsap.to(link, {
        keyframes: [
          { color: '#ff4500', duration: 0.2 }, // Red
          { color: '#ffd700', duration: 0.2 }, // Gold
          { color: '#fff', duration: 0.2 },    // White
        ],
      });

      // Expand and animate the underline
      gsap.to(underline, {
        keyframes: [
          { backgroundColor: '#ff4500', duration: 0.2 }, // Red
          { backgroundColor: '#ffd700', duration: 0.2 }, // Gold
          { backgroundColor: '#fff', duration: 0.2 },    // White
        ],
        transform: 'scaleX(1)', // Expand the underline
        transformOrigin: 'bottom left',
        duration: 0.3,
      });
    });

    // Reset on mouse leave
    link.addEventListener('mouseleave', () => {
      gsap.to(link, { color: '#fff', duration: 0.2 }); // Reset text color
      gsap.to(underline, {
        // backgroundColor: '#ff4500', // Reset underline color
        // transform: 'scaleX(0)',     // Collapse the underline
        duration: 0.3,
      });
    });
  });
