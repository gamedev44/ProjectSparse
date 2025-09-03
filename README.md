# 🌌 Froxels Engine  
### A Minecraft Reforged Inspired Overhaul for Unreal Engine 5.2  

Froxels Engine is a **voxel sandbox toolkit** focused on **long-term scalability**, **deep modding support**, and **research access for developers**.  

## Note: ``This repository serves as a **source-available peak** for modders, first-party developers, and release distribution of game executables.``  

---

# 📑 Table of Contents  
1. [Editor & Levels](#editor--levels)  
2. [Settings](#settings)  
   - [General Settings](#general-settings)  
   - [Graphics Settings](#graphics-settings)  
   - [Custom World Settings](#custom-world-settings)  
3. [World Generation](#world-generation)  
   - [Noise Modifying](#noise-modifying)  
   - [Tree Generation](#tree-generation)  
4. [Voxel Blueprint & Administration](#voxel-blueprint--administration)  
   - [Apply Material](#apply-material)  
   - [Item Pick](#item-pick)  
   - [Add Instance Voxel](#add-instance-voxel)  
5. [Character & Tools](#character--tools)  
   - [Weapons & Tools](#weapons--tools)  
   - [Block Interaction](#block-interaction)  
   - [Weapon Animation](#weapon-animation)  
6. [Animation System](#animation-system)  
7. [Rendering & Visual Effects](#rendering--visual-effects)  
8. [UMG & UI](#umg--ui)  
9. [GameInstance & Data Persistence](#gameinstance--data-persistence)  
10. [Modding Support](#modding-support)  
11. [Overhaul Stats](#overhaul-stats)  
12. [Roadmap](#roadmap)  
13. [Latest Release](#latest-release)  

---

## 🎮 Editor & Levels  
- **Menu Level** → includes background music, main menu widget, MenuGameMode.  
- **Voxel Map** → the main voxel world level with full generation, sky, sounds, floor, player start, and controllers.  
- **BSP Level** → sandbox map for testing new items/weapons with colored materials.  

---

## ⚙️ Settings  

### General Settings  
- Render range (spawn radius of voxel actors).  
- Materials: swap between simple or noise-driven materials.  
- Static objects: add/remove instanced meshes (grass, flowers, mushrooms).  
- Dynamic objects: add/remove particle FX (birds, leaves, dust).  

### Graphics Settings  
- Standard Unreal graphics console commands exposed for in-game tweaking.  

### Custom World Settings  
- Sniper Mode (debug line tracing).  
- Infinite voxel use toggle.  
- Cube size scaling (80, 120, 160).  
- Rounded trees toggle.  
- Character jump height and walk speed adjustment.  

---

## 🌍 World Generation  
- **C++ GenerateChunk()** fills arrays with block data (grass, dirt, stone, air).  
- **Noise-based terrain** using 4-pass Simplex Noise for smooth variation.  
- **UpdateMesh()** creates voxel faces via procedural mesh.  
- **UpdateExtras()** spawns instanced meshes, particles, and actors.  

### Noise Modifying  
- `AVoxelActor::calculateNoise()` combines multiple noise layers with multipliers.  

### Tree Generation  
1. Tree size (X, Y, Z) defined.  
2. Leaves generated with count checks.  
3. Trunk spawned as voxel column.  

---

## 🧱 Voxel Blueprint & Administration  

### Apply Material  
- Materials set in `VoxelActor_BP` → `Materials` and `MaterialsLow` arrays.  

### Item Pick  
- InstancedStaticMeshes trigger overlap events → item identified via `ItemID`.  

### Add Instance Voxel  
- Event spawns extras: grass, flowers, mushrooms, butterflies, birds, leaves.  

### Data Persistence  
- **Voxel Administration (C++)** saves/loads voxel changes via chunk/sector arrays.  
- Functions handle updating voxels, emptying them, or adding new values.  

---

## 🧑 Character & Tools  

### Weapons & Tools  
- **Pickaxe** → effective on stone/ore.  
- **Shovel** → effective on dirt/sand.  
- **Sword** → combat tool.  

### Block Interaction  
- Left Mouse → break block.  
- Right Mouse → place block if held.  
- Items swap via inventory/hotbar system.  

### Weapon Animation  
- Event-driven → idle sway, attack swings, mining/digging tied to movement.  
- Durability system optional.  

---

## 🌀 Animation System  
- **Blueprint Animation Base** — no AnimGraph/legacy state machines.  
- **Event-driven playback** via `PlaySlotAnimation("Action")`.  
- Expandable for modded actions/mobs.  

---

## 🎨 Rendering & Visual Effects  
- Dynamic per-pixel lighting with PBR.  
- Custom cubemap reflection probes.  
- Volumetric voxel-based clouds.  
- Cracking effects on blocks.  
- Grass wind FX scaling by mesh size.  
- Sand/stone materials via 3D noise.  
- Particles: falling leaves, dust/pollen, butterflies, birds.  

---

## 🖥 UMG & UI  
- **Widgets**: Start Game, Save/Load, Options, Inventory, Itembar, ItemPointer.  
- **Cursor Setup**: Project Settings → User Interface → Default Cursor.  
- **Item Pointer**: switches texture when selecting items.  

---

## 💾 GameInstance & Data Persistence  
- `BP_VoxelGameInstance` manages save data, Slate widgets, and `.sav` file handling.  
- Handles loading user settings, inventory, and save slots.  

---

## 🔧 Modding Support  
- Drag-and-drop mods: textures, models, tools, animations.  
- Everything exposed in Blueprints for easy extension.  
- Planned **Mod Page** if community demand grows.  
- **Texture Overhaul Pack** (in progress) → drag-and-drop ready.  

---

## 📊 Overhaul Stats  
- **Total Files Overhauled:** 708  
- **New Additions:** 319  
- **Focus:** scalability, ease of modding, modular design.  

---

## 🗺 Roadmap  
- [ ] Official modding hub & page.
- [ ] Easy Drag-and-drop slots for animations (Idle, Walk, Jump, Attack, Falling, Dig, etc and more). As well as New Models for Weapons,items and Buff's.
- [ ] Cross-Platform Support.    
- [ ] Texture overhaul DLC pack.  
- [ ] New tool/weapon types (axe, bow, ranged).  
- [ ] NPCs & AI mobs.  
- [ ] Weather & day/night cycle.  
- [ ] Multiplayer Support is planned via the horizon implementation as long as this game gets enough interest and concurrent players or requests. 

---

## 📦 Latest Release  (Coming Soon)
# 👉 [Download the Latest Froxels Engine Release](../../releases/latest)  

---

⚡ **Froxels Engine = Scalable sandbox worlds + next-gen voxel systems + easy modding thus unlimited Freedom.**  
