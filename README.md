# Periodic Madness

**NOT COMPATIBLE with existing saves. You need to start a new save game with Periodic Madness.**

This overhaul aims to add all the elements of the periodic table to Satisfactory. Including new and
complex production chains to refine and produce new ores and resources for your growing factory, and
delving deeper into chemistry and production chains than a normal vanilla playthrough. If you aren't a
chemistry nerd going in, you'll become one going out.

Sift through new "group ores", containing the elements of each separate periodic group (Alkali 
Metals, Transition Metals, etc) which can be broken down using new fluids or items to get a specific
new resource, all in the name of expansion. Of course, not all elements can just be found in the
ground; you'll have to search through air, sea and ground to get everything you need to build further
and research more.

This is a port of the [Periodic Madness](https://mods.factorio.com/mod/periodic-madness) mod for
Factorio.

## Main features

* [OBLIGATORY] 500+ recipes for you to endlessly scroll through, like you do on social media!
* Whole buncha recipe complexity, or your money back.
* Complete lack of maturity.
* Custom [Satisfactory Modeler Database for Periodic Madness](https://github.com/QuingKhaos/satisfactory-modeler-pm)

## Feedback

Please post your feedback into the dedicated [Discord thread](https://discordapp.com/channels/555424930502541343/1463163423348101153)
on the [Modding Discord](https://discord.gg/xkVJ73E).

## Caveats

**This is an early version of the port from the Factorio mod published for playtesting and gathering
feedback and nothing is finished yet.** Thus many things may feel a bit unsatifactory.

* Most new items are not sinkable, as I have not assigned AWESOME points to them yet.
* Nodes are reassigned but models are still the original. So better look at what the text overlay
  says.
* Nickel chunks (uses Quartz nodes) and Zinc chunks (uses Bauxite nodes) may be scarce. Use
  [Magic Machines](https://ficsit.app/mod/MagicMachine) to spawn them in without going on big
  exploring.
* **Use Magic Machines to spawn in the group metals ores, which don't have any nodes yet (Alkali
  Metals Ore, Metalloids Ore).**
* No ingots yet. Ores are directly smelted into plates.
* Beside their name, the Burner variants and normal Furnace still require electricity until the fuel
  powered machinery is implemented.
* Beside from the two inventory expansions there are no alternate recipes to unlock via hard drives yet.
* Recipes which don't have their own special building are handled by a catch-them-all Assembling
  Machine and not spread over Constructor, Assembler, etc.
* The ratios of recipes and amount of items needed may feel very unsatisfactory and may need a proper
  rebalancing.
* Instead of Space Elevator parts, the Space Elevator wants to get fed with science packs. As well as
  all of the milestones.
* Many milestones have other milestones as their dependency to create a given game progression. Sadly,
  due to the limitation of the HUB, those milestones are not shown as long as you don't have unlocked
  their dependencies yet. Surprise party!
* Most of the original PM assets were only available as 64x64, thus they appear pixelated in the game.
  That's not a problem with your VRAM.
* Many of the new items use placeholder boxes on belts, as I don't have access to all 3D models
  for them yet.
* All the custom machines are just cargo wagons with belt/pipe in-/outputs attached. They need custom
  3D models in the future too.
* Multiplayer is untested yet, feel free to try it out, although not dedicated server build is
  published yet.
* For foundation, walls, architecture, only the Ficsit style can be used for now.

## Compatibilty

This is a complete overhaul of items and recipes in the game. Thus no mod which adds new content or
modifies existing content is compatible with Periodic Madness, unless stated otherwise. Most QoL mods
should be compatible, tho.

The following content mods were made compatible (changed recipes and/or progression):

* [Awesome Sink Storage](https://ficsit.app/mod/AwesomeSinkStorage)
* [Circuitry](https://ficsit.app/mod/FicsitWiremod)
* [Factory Style](https://ficsit.app/mod/AB_MiscDecoMod)
* [FicsIt-Networks](https://ficsit.app/mod/FicsItNetworks)
* [Flex Splines](https://ficsit.app/mod/FlexSplines)
* [Loader and Unloader](https://ficsit.app/mod/Loaders), altough the unloader can't handle recipes
  with multiple item outputs properly. It results in a sushi belt.
* [Small Awesome Sink](https://ficsit.app/mod/SmallAwesomeSink), altough the small fluid sink is
  removed, as PM has its own means to get rid of fluids.
* [Wall Conveyor Supports](https://ficsit.app/mod/WallConveyorSupports)
* [Wall Pipe Supports](https://ficsit.app/mod/WallPipeSupports)

The following content mods are included as part of Periodic Madness and adapted to be compatible:

* [Fluid Extras](https://ficsit.app/mod/AB_FluidExtras), including only the pipe junctions and the
  Mini Water Extractor, which is used as Seawater Extractor.
* [Refined Power](https://ficsit.app/mod/RefinedPower), including only solar panels, water
  turbines/dam and Modular Power.

### Circuitry Compatibility

To add circuit wires to all custom machines, the following steps are needed during development of the
mod:

- Go to the [releases](https://github.com/QuingKhaos/PeriodicMadness/releases) page.
- Download the `PeriodicMadness.json` from the release matching your installed mod version.
- Put it into `<SatisfactoryInstallDir>/FactoryGame/CircuitryAPI/`.

## Credits

* Thanks to Mr.SmoothieHuman allowing me to do this port.
* Thanks to [SirDigby](https://ficsit.app/user/4Mpda7UPxKixEB) for providing the blueprint code to
  fix the items per minute and overclock values in the machines widget.
* Thanks to [DavidHGillen](https://ficsit.app/user/3cMuLsemCEZUDc), who created the awesome
  [Modeling Tools](https://github.com/DavidHGillen/Satisfactory_ModelingTools), which are used by
  every custom building.
