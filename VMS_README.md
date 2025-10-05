# Visual Memory Simulator (VMS)

**Visual Memory Simulator (VMS)** is a graphical tool designed to visualize cache memory operations and simulate memory access patterns for better understanding of computer architecture concepts.  
It supports configurable cache parameters, multiple replacement policies, and interactive visualization utilities.

---

##  Installation and Setup

### 1. Clone the Repository

git clone https://github.com/Smriti-26/Visual-Memory-Simulator

### 2. Navigate into the Project Directory

cd Visual-Memory-Simulator

### 3. Create and Activate a Virtual Environment

python3 -m venv .venv
source .venv/bin/activate

### 4. Install Required Dependencies

python3 -m pip install PyQt5
sudo apt-get install libxcb-xinerama0
pip install matplotlib
pip install pyautogui
pip install opencv-python
pip install opencv-python-headless

### 5. Extract Required Archives

tar -xf pin-3.30-98830-g1d7b601b3-gcc-linux.tar.xz
tar -xf tracer.tar.xz

### 6. Grant Execution Permissions to ChampSim Scripts

chmod +x run_champsim.sh
chmod +x build_champsim.sh

### 7. Install VLC to Enable Video Output

sudo apt install vlc -y

## Optional Dependencies

If some dependencies are missing, you may verify or install the following versions:
Package	Version
contourpy	1.2.1
cycler	0.12.1
fonttools	4.52.4
kiwisolver	1.4.5
matplotlib	3.9.0
numpy	1.26.4
opencv-python	4.9.0.80
opencv-python-headless	4.10.0.82
packaging	24.0
pillow	10.3.0
pip	24.0
pyparsing	3.1.2
PyQt5	5.15.10
PyQt5-Qt5	5.15.2
PyQt5-sip	12.13.0
python-dateutil	2.9.0.post0
six	1.16.0

## VMS Utilities and Functionalities

    Configurable Cache Parameters
    Modify block size, sets, and ways using the Update Parameter button.

    Execution Note
    The interface may temporarily display “Not Responding” — this indicates background computation, not an error. The display updates automatically when execution completes.

    Cache Replacement Policies
    Supports LRU and SRRIP, selectable via radio buttons.

    Graph and Video Generation
    Enable the “Create Graph” and “Create Video” checkboxes after running a simulation to visualize cache activity.

    Input Options
    Enter C/C++ code directly in the text box, or upload a .c / .cpp file, or select a pre-generated trace file.

    Visualization
    The color gradient ribbon represents cache block usage:

        🟡 Yellow → Minimum access frequency

        🔴 Red → Maximum access frequency

    Screenshot Functionality
    Capture the simulator window anytime using the Take Screenshot button.

    Reset Function
    Reset the cache state using the Reset button.

    Run Function
    Execute the program, generate a trace file, and visualize the final cache condition using the Run button.

    Next Access Visualization
    View the cache state after the next memory access using the Next button, based on the skip instruction count.

    Skip Instruction Count
    Defines how many instructions are skipped before showing the next memory access.

    Write Tolerance
    Specifies how many times a cache block can be accessed before it is considered worn out.

## Authors and Contributors

    Smriti Gupta
    Indian Institute of Technology, Ropar
    GitHub: Smriti-26

    Sushant Arun Bhalerao
    Indian Institute of Technology, Ropar
    GitHub: Sushant0001

    Under the guidance of:
    Dr. Neeraj Goel and Dr. T. V. Kalyan
    
## Notes

    The tool is computationally intensive — expect slight delays during large simulations.

    Ensure all extracted directories (e.g., pin, tracer) are located within the project folder.

    For any issues or contributions, please visit the GitHub Repository
    
