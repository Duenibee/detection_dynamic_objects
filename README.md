# Youbot Navigation
![image](https://github.com/Duenibee/detection_dynamic_objects/assets/89338327/020fa68b-383c-4fbb-a09e-b3d804e4c587)
---
### 결과영상:
https://drive.google.com/file/d/1j_pow2E7rwtA0BgGOqT915b8i4mBVr4S/view?usp=drive_link
---
### **사용 센서**
2D LiDAR : Hokuyo UTM-30LX-EW
RGB-D camera : RealSense D435i
---
### **실행순서**
twist mux 실행(조이스틱 명령 우선순위 출력)

```jsx
roslaunch twist_mux twist_mux.launch
roscd youbot_teleop/scripts/
./joy_2_cmd_vel.py
```

navigation stack 실행 

```jsx
roslaunch navstack_pub nav_pub_yolo.launch
```

YOLOv8 실행(인식만)

```jsx
roslaunch yolov8_ros yolov8_3d.launch
```

동적 장애물 인식후 정지 실행 

```jsx
rosrun yolov8_ros stop_nav.py
```

---

2D clustering

```jsx
roslaunch obstacle_detector demo2.launch
```

U-V depth detetcion

```jsx
roslaunch onboard_detector run_detector.launch
```
