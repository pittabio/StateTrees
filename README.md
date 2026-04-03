# StateTrees

This is a project documenting the journey of learning and mastering fundamentals and core concepts through practical implementation exploring Unreal Engine's State Tree system for AI behaviors, quest systems, and advanced gameplay logic.

**Project Status:**
✅ Completed

---

## Table of Contents
- [Description](#-description)
- [Objectives](#-objectives)
- [Purpose](#-purpose)
- [Related Projects](#-related-projects)
- [Project Roadmap](#%EF%B8%8F-project-roadmap)
	- [Current Phase](#-current-phase)
- [Future Vision](#-future-vision)
	- [Integration Concept](#-integration-concept)
	- [Potential Applications](#-potential-applications)
- [Development Notes](#-development-notes)
- [Repository Structure](#-repository-structure)
	- [Branch Organization](#branch-organization)
- [Technologies](#%EF%B8%8F-technologies)
- [Contents](#-contents)
	- [Epic Games](#epic-games)
- [Learning Resources](#-learning-resources)
- [License](#-license)
- [Q & A](#%EF%B8%8F-q--a)

---

## 📋 Description
StateTreeAI is a learning and research project created to explore and master the State Tree system through practical examples. <br>
Built in Unreal Engine 5.6 using C++ and Blueprints, the project features a testing environment to experiment with various State Tree implementations for AI, quests, and complex gameplay systems.

## 🎯 Objectives
- Experiment with the State Tree system
- Implement AI behaviors using State Trees
- Create a quest system leveraging State Tree logic
- Test new implementations and code patterns
- Build a collection of working examples for practical use

## 💭 Purpose
This repository serves as:
- A personal learning journey through State Trees
- A reference for implementing State Tree features
- A collection of working examples for future projects
- A resource for others learning State Trees, AI systems and Quest system

## 🔗 Related Projects
This project is part of a learning series focused on Unreal Engine systems:
- **GasAbilities** (completed): Gameplay Ability System ✅
	- [GitHub](https://github.com/fabio-pitt/GasAbilities) 
	- [GitLab](https://gitlab.com/fabio-pitt/GasAbilities)

- **StateTreeAI** (this repo): State Trees, AI behaviors, and Quest System ✅
	- [GitHub](https://github.com/fabio-pitt/StateTreeAI)
	- [GitLab](https://gitlab.com/fabio-pitt/StateTreeAI)

- **Future Integration** (planned): Full-scale project combining GAS, State Trees, and advanced AI 📅

> [!TIP]
> **Learning Path** <br>
> Each system is mastered in isolation before integration. <br>
> This approach ensures deep understanding and creates reusable reference implementations.

---

## 🗺️ Project Roadmap
This project follows a progressive learning path focused on mastering State Trees and their applications.

```
┌─────────────────────┐      ┌─────────────────────┐      ┌──────────────────────────┐
│    GasAbilities     │      │     StateTreeAI     │      │   Ultimate Integration   │
├─────────────────────┤      ├─────────────────────┤      ├──────────────────────────┤
│ - Completed -       │ ───→ │ - Completed -       │ ───→ │ - Future Vision -        │
│ Core GAS mechanics  │      │ State Tree Logic    │      │ GAS + State Trees        │
│ Ability Framework   │      │ AI & Quest Systems  │      │ Production-Ready Project │
└─────────────────────┘      └─────────────────────┘      └──────────────────────────┘
```

### 🎓 Current Phase
**Focus:** Foundation & Core Concepts 
**Status:** Completed ✅

Learning the fundamentals of State Trees through practical implementation:
- Understanding State Tree architecture and evaluation
- Basic AI behavior implementation
- Transition logic and conditions
- State Tree tasks and evaluators
- Integration with existing systems

**Approach:** Iterative learning with focus on practical examples

## 🚀 Future Vision: The Integration Paradigm
Rather than just a roadmap, the goal is a technical synergy where GAS and State Trees merge into a high-performance gameplay framework. 
This represents the culmination of this research phase, moving from isolated systems to a production-ready architecture.

### 🧩 Integration Concept
Combining these two systems unlocks a powerful design pattern:
- Intelligent Decision-Making: The State Tree acts as the "brain," evaluating world state, player distance, and resources to decide when to engage.
- Standardized Execution: The Gameplay Ability System (GAS) handles the "how," managing animations, cooldowns, and attribute changes (Health, Stamina) during state execution.
- Reactive Quest Design: Using State Tree persistence to drive dynamic world events triggered by specific GAS effects or player achievements.

### 🎮 Potential Applications
- Complex AI Combat: Enemies that tacticaly choose abilities based on the player's status, managed via State Tree evaluators and GAS tags.
- Dynamic RPG Ecosystems: Quest systems where NPCs change behavior states based on world-persisted data and completed objectives.
- Scalable MOBA Logic: Managing lane-pushing behaviors through State Trees while handling hero combat interactions through GAS.

---

## 📝 Development Notes
This project documents the journey of mastering State Tree fundamentals through practical implementation in Unreal Engine. Originally developed across multiple feature branches to isolate learning milestones, the repository has now been **consolidated into a single linear history**.

All major systems—including AI Behaviors, Quest Logic, and Save/Load mechanics—are now integrated directly into the `main` branch. This ensures a more streamlined experience for exploration and testing while maintaining a clear, chronological progression of the learning process.

---

## 📂 Repository Structure
This repository follows a **monolithic linear structure** where all features are integrated into the primary development line.

### Branch Organization
- **`main`**: The single source of truth. It contains the full implementation of all explored features, including:
    - **Core AI**: Basic State Tree movement and sensory systems.
    - **Quest System**: Modular objective logic and environment interaction.
    - **Persistence**: Save and Load systems for quest states and world data.
    - **Environment**: State Tree-driven actor activation and map logic.

> [!NOTE]
> Previous feature branches (`basic-ai`, `quest`, `SaveLoad`, `advanced`) have been merged and retired to provide a cleaner, more professional project overview and to avoid conflicts with Unreal Engine's binary asset management.

---

## 🛠️ Technologies
<!-- UNREAL -->
<div>
  <img src="https://skillicons.dev/icons?i=unreal" height="50" alt="unrealengine logo" style="vertical-align: middle;" /> 
  <code>Unreal Engine 5.6</code>
</div>

<!-- RIDER -->
<div>
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/rider/rider-original.svg" height="50" alt="rider logo" style="vertical-align: middle;" />
  <code>JetBrains Rider</code>
</div>

<!-- CODE -->
<div>
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/cplusplus/cplusplus-original.svg" height="50" alt="cplusplus logo" style="vertical-align: middle;"  />
  <code>C++</code> <code>Blueprint</code>
</div>

<!-- GIT -->
<div>
  <img src="https://cdn.simpleicons.org/git/F05032" height="50" alt="git logo" style="vertical-align: middle;" /> 
  <code>Git</code> <code>GitKraken Desktop</code>
</div>

---

## 📦 Contents

### Epic Games
This repository utilizes standard **Unreal Engine** assets for demonstration purposes such as the **UE Mannequin** used for AI movement and state visualization.
All Epic Games content is used under the [Unreal Engine EULA](https://www.unrealengine.com/en-US/eula/unreal) and is subject to Epic Games' licensing terms.

---

## 📚 Learning Resources
> [!IMPORTANT]
> Additional resources may be added as the project progresses.

This project is being developed while studying from various sources (_thanks to_):
- [Epic Games Learning](https://dev.epicgames.com/community/unreal-engine/learning) 
	- [Your First 60 Minutes with StateTree](https://dev.epicgames.com/community/learning/tutorials/lwnR/unreal-engine-your-first-60-minutes-with-statetree)
- [The Game Dev Cave](https://www.youtube.com/@thegamedevcave) 
	- [Unreal State Tree Course](https://www.youtube.com/playlist?list=PLoReGgpfex3x73FUEWY1W0HGXVGsFAw5E)
	- [State Tree Quest System](https://www.youtube.com/playlist?list=PLoReGgpfex3wIUKTauEf_PdQ9UU5ODG2F)
- **Extra:**
	- An article by Jean-Paul Software: [Some Of The Things You Didn't Want To Know About State Tree](https://jeanpaulsoftware.com/2024/08/13/state-tree-hell/)

---

## 📄 License
This project is protected by copyright. My original code and implementations are licensed for personal, non-commercial use only. <br>
Third-party content (e.g: Epic Games assets) retains its original licensing. See the [LICENSE](LICENSE) file for complete details.

---

## ⁉️ Q & A

**Q: How does this relate to GasAbilities?** <br>
**A**: GasAbilities explored the Gameplay Ability System. This project explores State Trees. A future project will combine both systems in a complete game implementation.

**Q: What is State Tree?** <br> 
**A**: State Tree is Unreal Engine's system for creating modular, reusable AI logic and gameplay systems, designed to be more efficient than traditional Behavior Trees.

**Q: Why a separate project from GasAbilities?** <br>
**A**: Learning each system in isolation ensures a deep understanding and creates a clean reference for future work.

**Q: Is this project still active?** <br>
**A**: This specific research project is completed. The implementations here serve as a foundational library for a future integrated project combining GAS and State Trees.

**Q: How do these systems relate to each other?** <br>
**A**: GasAbilities explored the Ability framework, while this project mastered the Logic/State framework. The next step is a full-scale game implementation using both.

---

[Return to top](#statetrees)
