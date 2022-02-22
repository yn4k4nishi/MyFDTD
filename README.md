# MyFDTD
FDTD法による電磁界シミュレーション

```mermaid
graph TD
    A[Initialize] -->|t = dt| B(Calculate electric field)
    B --> C(Absorption boundary condition)
    C --> |t = t + dt/2| D(Calculate magnetic field)
    D --> E(Absorption boundary condition)
    E --> |t = t + dt/2| F{t > t_max}
    F --> B
    F --> G(Termination)
```

## 1次元問題
自由空間中にある厚さ$d$の誘電体に平面波を入射した場合
<div align="center">
    <img src="img/1d-mur/problem.png">
</div>
<div align="center">
    <div>
        <h3>Murの吸収境界</h3>
        <img src="img/1d-mur/animation.gif">
    </div>
    <div>
        <h3>PML吸収境界</h3>
        <img src="img/1d-pml/animation.gif">
    </div>
</div>

# 参考
- 数値電磁界解析のためのFDTD法 -基礎と実践- (コロナ社)