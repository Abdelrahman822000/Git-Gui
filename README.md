**This Project was developed by Abdelrahman Mohamed Hamad**

# Git GUI

A graphical user interface (GUI) for managing Git repositories with functionalities for initializing, updating, cloning, and viewing repository status and logs.

## Table of Contents
- [Project Description](#project-description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)
- [Contact](#contact)

## Project Description

This project is a Git GUI developed using C++ and the Qt framework. It provides a user-friendly interface for common Git operations including creating new repositories, updating existing ones, cloning repositories, and viewing repository status and logs.

## Features

- Initialize new Git repositories
- Update existing repositories
- Clone repositories from remote sources
- View current repository status
- View commit logs

## Installation

### Prerequisites

- Qt Creator
- Qt 6.7.1 or higher
- C++ compiler (e.g., GCC, MinGW)
- Git (must be installed on your system)

### Steps

1. **Clone the repository:**
    ```bash
    git clone https://github.com/Abdelrahman822000/Git-Gui.git
    cd Git-Gui
    ```

2. **Build the project:**
    - Open the Git-Gui project in Qt Creator by choosing `File -> Open File or Project`, then navigate to where you cloned the repository and select `GIT_GUI_Project.pro`.
    - Configure the project using your desired kit.
    - Build the project using the Build menu.

## Usage

### Running the Application

1. **Start the application:**
    - Run the project using Qt Creator. The application will build and start.
    - Alternatively, navigate to `Git_GUI/build/Desktop_Qt_6_7_0_MinGW_64_bit-Release/release` and run the `GIT_GUI_Project.exe` executable.

### GUI Tabs

1. **Start Tab:**
    - Enter your username and email for git and choose your operation. ![Start](https://github.com/user-attachments/assets/870eb33c-190d-40f8-b7ee-3baf82713d09)

2. **New Repo Tab:**
    - Create a new Git repository by specifying the local repository path, the repository URL and initial commit message. ![New Repo](https://github.com/user-attachments/assets/562bd84d-41ed-4e36-9262-c22bf5d37f3b)

3. **Update Repo Tab:**
    - Update the local repository by specifying the local repository path and commit message. ![Update Repo](https://github.com/user-attachments/assets/a8957a5b-3f83-48f9-9a4f-70a16985b316)

4. **Clone Tab:**
    - Clone a remote repository to a local directory by providing the remote URL and local path. ![Clone Repo](https://github.com/user-attachments/assets/c8f80a6b-89eb-4a08-b20d-d89e2e5f975d)

5. **Status Tab:**
    - View the current status of the repository, including staged, unstaged, and untracked changes. ![Get Status](https://github.com/user-attachments/assets/11884f00-e6b9-455d-a388-793c1ba4e7be)

6. **Log Tab:**
    - View the commit history and detailed logs of the repository. ![Get Log](https://github.com/user-attachments/assets/e9cdc89e-e357-4e62-8fdc-cf98e44fcec9)

## License

This project is licensed under the GNU GENERAL PUBLIC LICENSE - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions, feel free to contact me:
- **Phone:** +201028325749
- **Email:** a.mohamed822000@gmail.com
- **LinkedIn:** [Abdelrahman Mohamed Hamad](https://www.linkedin.com/in/abdelrahman-mohamed-a1956b247/)

---