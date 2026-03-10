# StateTrees

This is an active learning project documenting the journey of learning and mastering fundamentals and core concepts through practical implementation exploring Unreal Engine's State Tree system for AI behaviors, quest systems, and advanced gameplay logic.

**Project Status:**
🚧 Learning - In Progress

---

## Table of Contents
- [Description](#-description)
- [Objectives](#-objectives)
- [Purpose](#-purpose)
- [Related Projects](#-related-projects)
- [Project Roadmap](#%EF%B8%8F-project-roadmap)
	- [Current Phase](#-current-phase-learning)
	- [Advanced Phase](#-advanced-phase-planned)
	- [Future Integration](#-future-integration-planned)
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
Built in Unreal Engine 5.7 using C++ and Blueprints, the project features a testing environment to experiment with various State Tree implementations for AI, quests, and complex gameplay systems.

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

- **StateTreeAI** (this repo): State Trees, AI behaviors, and Quest System 🚧
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
┌─────────────────────┐     ┌─────────────────────┐     ┌─────────────────────┐
│  Current Phase      │ ──→ │  Advanced Phase     │ ──→ │  Future Integration │
├─────────────────────┤     ├─────────────────────┤     ├─────────────────────┤
│ *Learning*          │     │ *Learning*          │     │ *Planned*           │
│ State Tree Basics   │     │ Complex AI Systems  │     │ GAS + State Trees   │
│ Simple AI Behaviors │     │ Quest System  	  │     │ Complete Game       │
│ Core Concepts		  │		│ Advanced Patterns	  │		│ Production-Ready	  │
└─────────────────────┘     └─────────────────────┘     └─────────────────────┘
      ↑
┌────────────────────┐
│ GasAbilities       │
│ (separate project) │
│ (completed)		 │
└────────────────────┘
```

### 🎓 Current Phase: Learning
**Focus:** Foundation & Core Concepts 
**Status:** In Progress 🚧

Learning the fundamentals of State Trees through practical implementation:
- Understanding State Tree architecture and evaluation
- Basic AI behavior implementation
- Transition logic and conditions
- State Tree tasks and evaluators
- Integration with existing systems

**Current Approach:** Iterative learning with focus on practical examples

### 📚 Advanced Phase (Planned)
**Focus:** Complex Systems & Production Patterns 
**Status:** Planned 📅

Future development will include:
- Advanced AI behaviors and decision-making
- Complete quest system implementation
- State Tree best practices and optimization
- Scalable architecture patterns
- Performance considerations

### 🎮 Future Integration (Planned)
**Focus:** Full-Scale Implementation 
**Status:** Planned 📅

Integration of State Trees with the Gameplay Ability System from the GasAbilities project:
- Combined GAS + State Tree architecture
- Complete game systems (AI, quests, abilities)
- Production-ready implementation

**Potential Directions** _(to be decided)_:
- **MMORPG:** Dynamic quest system, AI companions, enemy behaviors
- **MOBA:** Advanced AI behaviors, lane management, jungle AI

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
> [!WARNING]
> This section will be updated as the project develops.

### Epic Games
This project includes third-party content from **Epic Games**: <br>
All Epic Games content is used under the [Unreal Engine EULA](https://www.unrealengine.com/en-US/eula/unreal) and is subject to Epic Games' licensing terms.

---

## 📚 Learning Resources
> [!IMPORTANT]
> Additional resources may be added as the project progresses.

This project is being developed while studying from various sources (_thanks to_):
- [Epic Games Learning](https://dev.epicgames.com/community/unreal-engine/learning) - [Your First 60 Minutes with StateTree](https://dev.epicgames.com/community/learning/tutorials/lwnR/unreal-engine-your-first-60-minutes-with-statetree)
- [The Game Dev Cave](https://www.youtube.com/@thegamedevcave) - [Unreal State Tree Course](https://www.youtube.com/playlist?list=PLoReGgpfex3x73FUEWY1W0HGXVGsFAw5E)
- **Extra:**
	- An article by Jean-Paul Software: [Some Of The Things You Didn't Want To Know About State Tree](https://jeanpaulsoftware.com/2024/08/13/state-tree-hell/)

---

## 📄 License
This project is protected by copyright. My original code and implementations are licensed for personal, non-commercial use only. <br>
Third-party content (e.g: Epic Games assets) retains its original licensing. See the [LICENSE](LICENSE) file for complete details.

---

## ⁉️ Q & A

**Q: What is State Tree?** <br>
**A**: State Tree is Unreal Engine's system for creating modular, reusable AI logic and gameplay systems. It's designed to be more efficient and scalable than traditional Behavior Trees.

**Q: Why a separate project from GasAbilities?** <br>
**A**: Learning each system in isolation ensures deep understanding and creates focused reference material. Once both systems are mastered, they'll be integrated in a future project.

**Q: What will be implemented in this project?** <br>
**A**: The focus is on State Tree applications: AI behaviors, quest systems, and complex gameplay logic. The exact scope will evolve as learning progresses.

**Q: When will this be completed?** <br> 
**A**: This is a learning project without a fixed timeline. Progress depends on understanding and experimentation. Updates will be pushed as concepts are learned and implemented.

**Q: How does this relate to GasAbilities?** <br>
**A**: GasAbilities explored the Gameplay Ability System. This project explores State Trees. A future project will combine both systems in a complete game implementation.

---

[Return to top](#statetrees)
