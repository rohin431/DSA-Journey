const canvas = document.getElementById("canvas");
const ctx = canvas.getContext("2d");

canvas.width = window.innerWidth;
canvas.height = window.innerHeight;

let waves = [];

class Wave {
    constructor(x, y) {
        this.x = x;
        this.y = y;
        this.radius = 0;
        this.alpha = 1;
    }

    update() {
        this.radius += 2;
        this.alpha -= 0.01;
    }

    draw() {
        ctx.beginPath();
        ctx.arc(this.x, this.y, this.radius, 0, Math.PI * 2);
        ctx.strokeStyle = `rgba(0, 255, 255, ${this.alpha})`;
        ctx.lineWidth = 2;
        ctx.stroke();
    }
}

function animate() {
    ctx.clearRect(0, 0, canvas.width, canvas.height);

    waves.forEach((wave, index) => {
        wave.update();
        wave.draw();

        if (wave.alpha <= 0) {
            waves.splice(index, 1);
        }
    });

    requestAnimationFrame(animate);
}

canvas.addEventListener("click", (e) => {
    waves.push(new Wave(e.clientX, e.clientY));
});

animate();
